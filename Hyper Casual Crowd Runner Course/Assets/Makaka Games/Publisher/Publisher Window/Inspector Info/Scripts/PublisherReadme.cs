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

using System;

using UnityEngine;

public class PublisherReadme : ScriptableObject 
{
	public Texture2D icon;
	public string title;
	public Section[] sections;
	
	[Serializable]
	public class Section 
	{
		public string heading, text, linkText, url;
	}
}
