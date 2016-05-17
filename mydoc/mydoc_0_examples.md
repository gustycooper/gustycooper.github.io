---
title: Example Authoring
tags: [getting_started]
keywords: sample, authoring
last_updated: May 1, 2016
summary: "<li>This page does not have learning objectives.</li> <li>I added this page in order to retain examples of authoring pages.</li>"
sidebar: mydoc_sidebar
permalink: /mydoc_0_examples/
---

## Example Site URLS

For these next two links to work, I need to perform [Managed Links](http://idratherbewriting.com/documentation-theme-jekyll/mydoc_hyperlinks/), which uses urls.txt, _site/urls.txt, and _data/urls.yml.  Then site.data.urls fetches the link information in the _data/urls.yml file.

* {{site.data.urls.mydoc_install_jekyll_on_mac.link}}
* {{site.data.urls.mydoc_install_jekyll_on_windows.link}}

Link to an external site.

[Managed Links](http://idratherbewriting.com/documentation-theme-jekyll/mydoc_hyperlinks/)

HTML Style Link to an internal page

<a href="{{ "/mydoc_1_algorithms" | prepend: site.baseurl }}">Algorithms</a>.

Markdown style link to an internal page.

[Algorithms](/gustycooper.github.io/mydoc_1_algorithms)

Markdown style link to an internal page using baseurl, which **does not work**.

[Algorithms]({{baseurl}}mydoc_1_algorithms)

## Example Superscript and Subscript

O(n<sup>2</sup>)

O(n<sub>2</sub>)

## Example Tooltip

See ```_data/glossary.yml``` for defintion of gusty.  Hover over gusty below.

<a href="#" data-toggle="tooltip" data-original-title="{{site.data.glossary.gusty}}">Gusty</a> is my favorite teacher.

## Types of Alerts Available

There are four types of alerts you can leverage: 

* note.html
* tip.html
* warning.html
* important.html

They function the same except they have a different color, icon, and alert word. You include the different types by selecting the include template you want. Here are samples of each alert:

{% include note.html content="This is my note." %}

{% include tip.html content="This is my tip." %}

{% include warning.html content="This is my warning." %}

{% include important.html content="This is my important info." %}

## Font Awesome

There are many font pictures defined at [Font Awesome library](http://fortawesome.github.io/Font-Awesome/icons/).  The following are various sizes of cameras. 

<i class="fa fa-camera-retro"></i> 1x
<i class="fa fa-camera-retro fa-lg"></i> fa-lg
<i class="fa fa-camera-retro fa-2x"></i> fa-2x
<i class="fa fa-camera-retro fa-3x"></i> fa-3x
<i class="fa fa-camera-retro fa-4x"></i> fa-4x
<i class="fa fa-camera-retro fa-5x"></i> fa-5x

You can mix Font Awesome with Alerts.

<div class="alert alert-danger" role="alert"><i class="fa fa-exclamation-circle fa-lg"></i> This is a special warning message.</div>

## Images

You embed an image the same way you embed other files or assets: you put the file into a folder, and then link to that file. 

Put images inside the `images` folder in your root directory. You can create subdirectories inside this directory. Although you could use Markdown syntax for images, the HTML syntax is probably easier:

The following is HTML syntax for an image.

<img title="my sample image" src="{{ "/images/jekyll.png" | prepend: site.baseurl }}">

The following is Markup syntax for an image.

![My sample page]({{ "/images/jekyll.png" | prepend: site.baseurl }})

The following is HTML syntax for an image with a caption

<figure><img title="my sample page" src="{{ "/images/jekyll.png" | prepend: site.baseurl }}" />
<figcaption>A Jekyll Image</figcaption></figure>

## Labels

Labels might come in handy for adding button-like tags next to elements, such as POST, DELETE, UPDATE methods for endpoints. You can use any classes from Bootstrap in your content.

<span class="label label-default">Default</span>
<span class="label label-primary">Primary</span>
<span class="label label-success">Success</span>
<span class="label label-info">Info</span>
<span class="label label-warning">Warning</span>
<span class="label label-danger">Danger</span>

## Navtabs demo

The following is a demo of a navtab. Refresh your page to see the tab you selected remain active.

You must use HTML within the navtab content because each navtab section is surrounded with HTML, and you can't use Markdown inside of HTML.

 
<ul id="profileTabs" class="nav nav-tabs">
    <li class="active"><a class="noCrossRef" href="#profile" data-toggle="tab">Profile</a></li>
    <li><a class="noCrossRef" href="#about" data-toggle="tab">About</a></li>
    <li><a class="noCrossRef" href="#match" data-toggle="tab">Match</a></li>
</ul>
  <div class="tab-content"> 
<div role="tabpanel" class="tab-pane active" id="profile">
    <h2>Profile</h2> 
<p>Praesent sit amet fermentum leo. Aliquam feugiat, nibh in u ltrices mattis, felis ipsum venenatis metus, vel vehicula libero mauris a enim. Sed placerat est ac lectus vestibulum tempor. Quisque ut condimentum massa. Proin venenatis leo id urna cursus blandit. Vivamus sit amet hendrerit metus.</p>
</div>

<div role="tabpanel" class="tab-pane" id="about">
    <h2>About</h2>
    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam vel sollicitudin felis. Sed eu arcu sed ipsum semper luctus eu a tortor. Suspendisse id leo eu metus laoreet varius. Mauris consequat accumsan ex, a iaculis metus fermentum a. Praesent sit amet fermentum leo. Aliquam feugiat, nibh in u ltrices mattis, felis ipsum venenatis metus, vel vehicula libero mauris a enim. Sed placerat est ac lectus vestibulum tempor. Quisque ut condimentum massa. Proin venenatis leo id urna cursus blandit. Vivamus sit amet hendrerit metus.about</p></div>

<div role="tabpanel" class="tab-pane" id="match">
    <h2>Match</h2>
    <p>Vel vehicula libero mauris a enim. Sed placerat est ac lectus vestibulum tempor. Quisque ut condimentum massa. Proin venenatis leo id urna cursus blandit. Vivamus sit amet hendrerit metus.</p>
</div>
</div>

## Tables

The following is a Markdow Table


 Column 1 | Column 2
--------|----------
cell 1a | cell 1b
cell 2a | cell 2b

See [Jekyll Doc Theme](http://idratherbewriting.com/documentation-theme-jekyll/mydoc_tables/) for fancy jQuery Table format.

## Code Syntax Highlight

The markdown \`\`\`java looks as follows:

```java
    public static void main(String[] args) {
      System.out.println("Hello");
    }
```

Fenced code blocks require a blank line before and after.


{% highlight java %}
    public static void main(String[] args) {
      System.out.println("Hello");
    }
{% endhighlight %}

The theme has syntax highlighting specified in the configuration file as follows:

```
highlighter: rouge
```

The syntax highlighting is done via the css/syntax.css file.
