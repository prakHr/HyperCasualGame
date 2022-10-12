/*
===================================================================
Unity Assets by MAKAKA GAMES: https://makaka.org/o/all-unity-assets
===================================================================

Online Docs (Latest): https://makaka.org/unity-assets
Offline Docs: You have a PDF file in the package folder.

=======
SUPPORT
=======

First of all, read the docs. If it didn’t help, get the support.

Web: https://makaka.org/support
Email: info@makaka.org

If you find a bug or you can’t use the asset as you need, 
please first send email to info@makaka.org
before leaving a review to the asset store.

I am here to help you and to improve my products for the best.
*/

using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(PublisherReadme))]
[InitializeOnLoad]
public class PublisherReadmeEditor : Editor 
{	
	private static string kShowedReadmeSessionStateName =
		"PublisherReadmeEditor.showedReadme";

	private static float kSpace = 16f;

	private bool m_Initialized;

	[SerializeField]
	private GUIStyle m_LinkStyle;
	private GUIStyle LinkStyle { get { return m_LinkStyle; } }

	[SerializeField]
	private GUIStyle m_TitleStyle;
	private GUIStyle TitleStyle { get { return m_TitleStyle; } }

	[SerializeField]
	private GUIStyle m_HeadingStyle;
	private GUIStyle HeadingStyle { get { return m_HeadingStyle; } }

	[SerializeField]
	private GUIStyle m_BodyStyle;
	private GUIStyle BodyStyle { get { return m_BodyStyle; } }

	static PublisherReadmeEditor()
	{
		EditorApplication.delayCall += SelectReadmeAutomatically;
	}

	private static void SelectReadmeAutomatically()
	{
		if (!SessionState.GetBool(kShowedReadmeSessionStateName, false))
		{
			SelectReadme();
			SessionState.SetBool(kShowedReadmeSessionStateName, true);
		} 
	}
	
	[MenuItem("Window/Makaka Games/Support And Docs")]
	private static PublisherReadme SelectReadme()
	{
		var ids = AssetDatabase.FindAssets("PublisherReadme t:PublisherReadme");

		if (ids.Length == 1)
		{
			var readmeObject = AssetDatabase.LoadMainAssetAtPath(
				AssetDatabase.GUIDToAssetPath(ids[0]));
			
			Selection.objects = new UnityEngine.Object[] {readmeObject};
			
			return (PublisherReadme)readmeObject;
		}
		else
		{
			Debug.Log("Couldn't find a readme");

			return null;
		}
	}
	
	protected override void OnHeaderGUI()
	{
		var readme = (PublisherReadme)target;

		Init();

		var iconWidth =
			Mathf.Min(EditorGUIUtility.currentViewWidth / 3f - 20f, 128f);
		
		GUILayout.BeginHorizontal("In BigTitle");
		{
			GUILayout.Label(readme.icon, GUILayout.Width(iconWidth),
			GUILayout.Height(iconWidth));
			GUILayout.Label(readme.title, TitleStyle);
		}

		GUILayout.EndHorizontal();
	}
	
	public override void OnInspectorGUI()
	{
		var readme = (PublisherReadme)target;

		Init();
		
		foreach (var section in readme.sections)
		{
			if (!string.IsNullOrEmpty(section.heading))
			{
				GUILayout.Label(section.heading, HeadingStyle);
			}

			if (!string.IsNullOrEmpty(section.text))
			{
				GUILayout.Label(section.text, BodyStyle);
			}

			if (!string.IsNullOrEmpty(section.linkText))
			{
				if (LinkLabel(new GUIContent(section.linkText)))
				{
					Application.OpenURL(section.url);
				}
			}

			GUILayout.Space(kSpace);
		}
	}

	private void Init()
	{
		if (m_Initialized)
		{
			return;
		}

		m_BodyStyle = new GUIStyle(EditorStyles.label);
		m_BodyStyle.wordWrap = true;
		m_BodyStyle.fontSize = 14;
		
		m_TitleStyle = new GUIStyle(m_BodyStyle);
		m_TitleStyle.fontSize = 26;
		
		m_HeadingStyle = new GUIStyle(m_BodyStyle);
		m_HeadingStyle.fontSize = 18;
		
		m_LinkStyle = new GUIStyle(m_BodyStyle);
		m_LinkStyle.wordWrap = false;

		// Match selection color which works nicely
        // for both light and dark skins
		m_LinkStyle.normal.textColor =
			new Color (0x00/255f, 0x78/255f, 0xDA/255f, 1f);
		m_LinkStyle.stretchWidth = false;
		
		m_Initialized = true;
	}

	private bool LinkLabel (GUIContent label, params GUILayoutOption[] options)
	{
		var position = GUILayoutUtility.GetRect(label, LinkStyle, options);

		Handles.BeginGUI();
		Handles.color = LinkStyle.normal.textColor;
		Handles.DrawLine(
			new Vector3(position.xMin, position.yMax),
			new Vector3(position.xMax, position.yMax));
		Handles.color = Color.white;
		Handles.EndGUI();

		EditorGUIUtility.AddCursorRect(position, MouseCursor.Link);

		return GUI.Button(position, label, LinkStyle);
	}
}
