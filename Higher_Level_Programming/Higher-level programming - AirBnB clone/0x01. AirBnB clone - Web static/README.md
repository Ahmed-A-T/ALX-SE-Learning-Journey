# 0x01. AirBnB clone - Web static

HTMLCSSFront-end

-   Weight: 1
-   Project over - took place from Mar 14, 2024 6:00 AM to Mar 19, 2024 6:00 AM
-   Manual QA review was done on Mar 24, 2024 11:01 PM

#### In a nutshell…

-   **Manual QA review:** 126.75/195 mandatory & 29.9/46 optional
-   **Altogether:**  **107.25%**
    -   Mandatory: 65.0%
    -   Optional: 65.0%
    -   Calculation:  65.0% + (65.0% \* 65.0%)  == **107.25%**

**Overall comment:**

Good work

### Concepts

_For this project, we expect you to look at these concepts:_

-   [HTML/CSS](https://intranet.alxswe.com/concepts/2)
-   [The trinity of front-end quality](https://intranet.alxswe.com/concepts/4)

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/135ef103cf7ed150c9760aadc66844113dfc3d35.gif)

## Background Context

### Web static, what?

Now that you have a command interpreter for managing your AirBnB objects, it’s time to make them alive!

Before developing a big and complex web application, we will build the front end step-by-step.

The first step is to “design” / “sketch” / “prototype” each element:

-   Create simple HTML static pages
-   Style guide
-   Fake contents
-   No Javascript
-   No data loaded from anything

During this project, you will learn how to manipulate HTML and CSS languages. HTML is the structure of your page, it should be the first thing to write. CSS is the styling of your page, the design. I really encourage you to fix your HTML part before starting the styling. Indeed, without any structure, you can’t apply any design.

Before starting, please fork or clone the repository `AirBnB_clone` from your partner if you were not the owner of the previous project.

## Resources

**Read or watch**:

-   [Learn to Code HTML & CSS](https://intranet.alxswe.com/rltoken/T9KyiA6_Tm3Ny6oTn08S-A "Learn to Code HTML & CSS") (_until “Creating Lists” included_)
-   [Inline Styles in HTML](https://intranet.alxswe.com/rltoken/7NdYbImFNofpB_FXXn3otg "Inline Styles in HTML")
-   [Specifics on CSS Specificity](https://intranet.alxswe.com/rltoken/z_OTPFCjmhXJJi7KJqBCbQ "Specifics on CSS Specificity")
-   [CSS SpeciFishity](https://intranet.alxswe.com/rltoken/orI812cozq-yd2769VdM_w "CSS SpeciFishity")
-   [Introduction to HTML](https://intranet.alxswe.com/rltoken/5_oZwvLXaIVLAzApdIm1VA "Introduction to HTML")
-   [CSS](https://intranet.alxswe.com/rltoken/m43vIxTBL2Wtqfwr0YWuKQ "CSS")
-   [MDN](https://intranet.alxswe.com/rltoken/BpSXtcWOGH0UT4XLCoQyJg "MDN")
-   [center boxes](https://intranet.alxswe.com/rltoken/Tlje4XYwyZbUfHkQWGi1WQ "center boxes")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/Zb9sTIct2xdhDCDLGF-RyQ "explain to anyone"), **without the help of Google**:

### General

-   What is HTML
-   How to create an HTML page
-   What is a markup language
-   What is the DOM
-   What is an element / tag
-   What is an attribute
-   How does the browser load a webpage
-   What is CSS
-   How to add style to an element
-   What is a class
-   What is a selector
-   How to compute CSS Specificity Value
-   What are Box properties in CSS

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project, is mandatory
-   Your code should be W3C compliant and validate with [W3C-Validator](https://intranet.alxswe.com/rltoken/RGLQtJVf7Ga3mU8NX9zADQ "W3C-Validator")
-   All your CSS files should be in `styles` folder
-   All your images should be in `images` folder
-   You are not allowed to use `!important` and `id` (`#...` in the CSS file)
-   You are not allowed to use tags `img`, `embed` and `iframe`
-   You are not allowed to use Javascript
-   Current screenshots have been done on `Chrome 56` or more.
-   No cross browsers
-   You have to follow all requirements but some `margin`/`padding` are missing - you should try to fit as much as you can to screenshots

## More Info

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/hbnb_step1.png)

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

#### Question #0

In the following code, is the text `Best School` red?

_css:_

```
h1 {
    color: green;
}

span.my_title {
    color: red;
}
```

_html:_

```
&lt;h1&gt;
    &lt;span class="my_title"&gt;Best School&lt;/span&gt;
&lt;/h1&gt;
```

-   No
    
-   Yes
    

#### Tips:

[CSS selector math](http://www.standardista.com/wp-content/uploads/2012/01/specificity3.pdf "CSS selector math")

#### Question #1

In the following code, is the text `Best School` red?

_css:_

```
h1 div.title {
    color: red;
}
```

_html:_

```
&lt;h1&gt;Best School&lt;/h1&gt;
```

-   No
    
-   Yes
    

#### Question #2

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

* {
    font-size: 14px;
    text-align: center;

    h1 {
        margin: 30px;
    }
}
```

-   No
    
-   Yes
    

#### Tips:

CSS vs SCSS

#### Question #3

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

* {
    font-size: 14px;
    font-weight: 400
    text-align: center;
}
```

-   No
    
-   Yes
    

#### Tips:

Betty for CSS!

#### Question #4

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

div.filters p.title h2 span.text.big {
    font-size: 20px;
}
```

-   No
    
-   Yes
    

#### Question #5

In the following code, is the text `Best School` red?

_css:_

```
h2 {
    color: red;
}
```

_html:_

```
&lt;h1&gt;Best School&lt;/h1&gt;
```

-   No
    
-   Yes
    

#### Question #6

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

* {
    font-size: 14px;
    text-align: center;
    margin: 30px 12px 4px;
}
```

-   No
    
-   Yes
    

#### Tips:

`margin` and `padding` support 4 different syntaxes: [margin](https://developer.mozilla.org/en-US/docs/Web/CSS/margin "margin")

#### Question #7

Is the following HTML markup valid?

```
&lt;html&gt;
    &lt;head&gt;
    &lt;/head&gt;
    &lt;body&gt;
        &lt;h1&gt;Best &lt;b&gt;School&lt;/h1&gt;&lt;/b&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

(elements are correctly tagged, we don’t care about `!Doctype` here)

-   No
    
-   Yes
    

#### Tips:

“Always close something before opening a new thing”

#### Question #8

In the following code, is the text `Best School` red?

_css:_

```
h1.title {
    color: red;
}
```

_html:_

```
&lt;h1&gt;Best School&lt;/h1&gt;
```

-   No
    
-   Yes
    

#### Question #9

Is the following HTML markup valid?

```
&lt;html&gt;
    &lt;head&gt;
    &lt;/head&gt;
    &lt;body&gt;
        &lt;h1&gt;
            &lt;a href="www.google.com"&gt;Go to &lt;b&gt;Google&lt;/b&gt;
        &lt;/h1&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

(elements are correctly tagged, we don’t care about `!Doctype` here)

-   No
    
-   Yes
    

#### Question #10

Is the following HTML markup valid?

```
&lt;html&gt;
    &lt;head&gt;
    &lt;/head&gt;
    &lt;body&gt;
    &lt;body&gt;
&lt;/html&gt;
```

(elements are correctly tagged, we don’t care about `!Doctype` here)

-   No
    
-   Yes
    

#### Tips:

Each HTML tag must be closed

#### Question #11

In the following code, is the text `Best School` red?

_css:_

```
h3 span.text,
h1,
div.title {
    color: red;
}
```

_html:_

```
&lt;h1&gt;Best School&lt;/h1&gt;
```

-   No
    
-   Yes
    

#### Question #12

In the following code, is the text `Best School` red?

_css:_

```
h1 {
    color: red;
}
```

_html:_

```
&lt;h1&gt;Best School&lt;/h1&gt;
```

-   No
    
-   Yes
    

#### Question #13

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

div.filters h2 {
    font-size: 16px;
}
```

-   No
    
-   Yes
    

#### Question #14

Is the following HTML markup valid?

```
&lt;html&gt;
    &lt;head&gt;
    &lt;/head&gt;
    &lt;body&gt;
        &lt;h1&gt;
            &lt;a href="www.google.com'&gt;Google&lt;/a&gt;
        &lt;/h1&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

(elements are correctly tagged, we don’t care about `!Doctype` here)

-   No
    
-   Yes
    

#### Tips:

Number of quotes is important!

#### Question #15

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

h1.title {
    font-size: 16px;
}
```

-   No
    
-   Yes
    

#### Question #16

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

h3,
div.full_text
div.small_text h4
div.filters p.title {
    font-size: 20px;
}
```

-   No
    
-   Yes
    

#### Tips:

`,` separates multiple selector, without it’s specific selector

#### Question #17

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

* {
    font-size: 14px;
}
```

-   No
    
-   Yes
    

#### Tips:

[Universal selectors](https://developer.mozilla.org/en-US/docs/Web/CSS/Universal_selectors "Universal selectors")

#### Question #18

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}

h3,
div.full_text,
div.small_text h4,
div.filters p.title {
    font-size: 20px;
}
```

-   No
    
-   Yes
    

#### Question #19

Is the following HTML markup valid?

```
&lt;html&gt;&lt;/html&gt;
```

(elements are correctly tagged, we don’t care about `!Doctype` here)

-   No
    
-   Yes
    

#### Question #20

Is the following HTML markup valid?

```
&lt;html&gt;
    &lt;head&gt;
    &lt;/head&gt;
    &lt;body&gt;
        &lt;img src="logo.png" /&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

(elements are correctly tagged, we don’t care about `!Doctype` here)

-   No
    
-   Yes
    

#### Tips:

`<img />` is an empty element

#### Question #21

In the following code, is the text `Best School` red?

_css:_

```
h1 .my_title {
    color: green;
}

.my_title {
    color: red;
}
```

_html:_

```
&lt;h1&gt;
    &lt;span class="my_title"&gt;Best School&lt;/span&gt;
&lt;/h1&gt;
```

-   No
    
-   Yes
    

#### Tips:

[CSS selector math](http://www.standardista.com/wp-content/uploads/2012/01/specificity3.pdf "CSS selector math")

#### Question #22

Is following CSS syntax valid?

```
body {
    color: #FF0000;
}
```

-   No
    
-   Yes
    

#### Question #23

Is the following HTML markup valid?

```
&lt;html&gt;
    &lt;head&gt;
    &lt;/head&gt;
    &lt;body&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

(elements are correctly tagged, we don’t care about `!Doctype` here)

-   No
    
-   Yes
    

## Tasks

### 0\. Inline styling

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header and a footer.

Layout:

-   Body:
    -   no margin
    -   no padding
-   Header:
    -   color #FF0000 (red)
    -   height: 70px
    -   width: 100%
-   Footer:
    -   color #00FF00 (green)
    -   height: 60px
    -   width: 100%
    -   text `Best School` center vertically and horizontally
    -   always at the bottom at the page

Requirements:

-   You must use the `header` and `footer` tags
-   You are not allowed to import any files
-   You are not allowed to use the `style` tag in the `head` tag
-   Use inline styling for all your tags

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/98f4ac1b0644512ce7ae91a9e8e61e8fe174911d.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `0-index.html`

View results

×

#### 0\. Inline styling

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 1\. Head styling

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header and a footer by using the `style` tag in the `head` tag (same as `0-index.html`)

Requirements:

-   You must use the `header` and `footer` tags
-   You are not allowed to import any files
-   No inline styling
-   You must use the `style` tag in the `head` tag

The layout must be exactly the same as `0-index.html`

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `1-index.html`

View results

×

#### 1\. Head styling

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 2\. CSS files

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header and a footer by using CSS files (same as `1-index.html`)

Requirements:

-   You must use the `header` and `footer` tags
-   No inline styling
-   You must have 3 CSS files:
    -   `styles/2-common.css`: for global style (i.e. the `body` style)
    -   `styles/2-header.css`: for header style
    -   `styles/2-footer.css`: for footer style

The layout must be exactly the same as `1-index.html`

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `2-index.html, styles/2-common.css, styles/2-header.css, styles/2-footer.css`

View results

×

#### 2\. CSS files

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 3\. Zoning done!

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header and footer by using CSS files (same as `2-index.html`)

Layout:

-   Common:
    -   no margin
    -   no padding
    -   font color: #484848
    -   font size: 14px
    -   font family: `Circular,"Helvetica Neue",Helvetica,Arial,sans-serif;`
-   Header:
    -   color: white
    -   height: 70px
    -   width: 100%
    -   border bottom 1px #CCCCCC
-   Footer:
    -   color white
    -   height: 60px
    -   width: 100%
    -   border top 1px #CCCCCC
    -   text `Best School` center vertically and horizontally
    -   always at the bottom at the page

Requirements:

-   No inline style
-   You are not allowed to use the `img` tag
-   You are not allowed to use the `style` tag in the `head` tag
-   All images must be stored in the `images` folder
-   You must have 3 CSS files:
    -   `styles/3-common.css`: for the global style (i.e `body` style)
    -   `styles/3-header.css`: for the header style
    -   `styles/3-footer.css`: for the footer style

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/2be1eda05a0d9097c210f2d3482a59aa858c5711.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `3-index.html, styles/3-common.css, styles/3-header.css, styles/3-footer.css, images/`

View results

×

#### 3\. Zoning done!

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 4\. Search!

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header, footer and a filters box with a search button.

Layout: (based on `3-index.html`)

-   Container:
    -   between `header` and `footer` tags, add a `div`:
        -   classname: `container`
        -   max width 1000px
        -   margin top and bottom 30px - it should be 30px under the bottom of the `header` (screenshot)
        -   center horizontally
-   Filter section:
    -   tag `section`
    -   classname `filters`
    -   inside the `.container`
    -   color white
    -   height: 70px
    -   width: 100% of the container
    -   border 1px #DDDDDD with radius 4px
-   Button search:
    -   tag `button`
    -   text `Search`
    -   font size: 18px
    -   inside the section filters
    -   background color #FF5A5F
    -   text color #FFFFFF
    -   height: 48px
    -   width: 20% of the section filters
    -   no borders
    -   border radius: 4px
    -   center vertically and at 30px of the right border
    -   change opacity to 90% when the mouse is on the button

Requirements:

-   You must use: `header`, `footer`, `section`, `button` tags
-   No inline style
-   You are not allowed to use the `img` tag
-   You are not allowed to use the `style` tag in the `head` tag
-   All images must be stored in the `images` folder
-   You must have 4 CSS files:
    -   `styles/4-common.css`: for the global style (`body` and `.container` styles)
    -   `styles/3-header.css`: for the header style
    -   `styles/3-footer.css`: for the footer style
    -   `styles/4-filters.css`: for the filters style
-   `4-index.html` **won’t be W3C valid**, don’t worry, it’s temporary

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/f959154b0cdf1cdf71ddef04e3787ef28462793e.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `4-index.html, styles/4-common.css, styles/3-header.css, styles/3-footer.css, styles/4-filters.css, images/`

View results

×

#### 4\. Search!

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 5\. More filters

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header, footer and a filters box.

Layout: (based on `4-index.html`)

-   Locations and Amenities filters:
    -   tag: `div`
    -   classname: `locations` for location tag and `amenities` for the other
    -   inside the section filters (same level as the `button` Search)
    -   height: 100% of the section filters
    -   width: 25% of the section filters
    -   border right #DDDDDD 1px only for the first left filter
    -   contains a title:
        -   tag: `h3`
        -   font weight: 600  
            
        -   text `States` or `Amenities`
    -   contains a subtitle:
        -   tag: `h4`
        -   font weight: 400  
            
        -   font size: 14px
        -   text with fake contents

Requirements:

-   You must use: `header`, `footer`, `section`, `button`, `h3`, `h4` tags
-   No inline style
-   You are not allowed to use the `img` tag
-   You are not allowed to use the `style` tag in the `head` tag
-   All images must be stored in the `images` folder
-   You must have 4 CSS files:
    -   `styles/4-common.css`: for the global style (`body` and `.container` styles)
    -   `styles/3-header.css`: for the header style
    -   `styles/3-footer.css`: for the footer style
    -   `styles/5-filters.css`: for the filters style

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/85bfa50b96c2985723daa75b5e22f75ef16e2b2e.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `5-index.html, styles/4-common.css, styles/3-header.css, styles/3-footer.css, styles/5-filters.css, images/`

View results

×

#### 5\. More filters

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 6\. It's (h)over

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header, footer and a filters box with dropdown.

Layout: (based on `5-index.html`)

-   Update Locations and Amenities filters to display a contextual dropdown when the mouse is on the filter `div`:
    -   tag `ul`
    -   classname `popover`
    -   text should be fake now
    -   inside each `div`
    -   not displayed by default
    -   color #FAFAFA
    -   width same as the `div` filter
    -   border #DDDDDD 1px with border radius 4px
    -   no list display
    -   Location filter has 2 levels of `ul`/`li`:
        -   state -> cities
        -   state name must be display in a `h2` tag (font size 16px)

Requirements:

-   You must use: `header`, `footer`, `section`, `button`, `h3`, `h4`, `ul`, `li` tags
-   No inline style
-   You are not allowed to use the `img` tag
-   You are not allowed to use the `style` tag in the `head` tag
-   All images must be stored in the `images` folder
-   You must have 4 CSS files:
    -   `styles/4-common.css`: for the global style (`body` and `.container` styles)
    -   `styles/3-header.css`: for the header style
    -   `styles/3-footer.css`: for the footer style
    -   `styles/6-filters.css`: for the filters style

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/6262f13624dca23ca19db505c44f88faddb82ebb.png) ![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/6e6bdfa13fa88a5f439d9e2b1dade826dd95529b.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `6-index.html, styles/4-common.css, styles/3-header.css, styles/3-footer.css, styles/6-filters.css, images/`

View results

×

#### 6\. It's (h)over

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 7\. Display results

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header, footer, a filters box with dropdown and results.

Layout: (based on `6-index.html`)

-   Add Places section:
    -   tag: `section`
    -   classname: `places`
    -   same level as the filters section, inside `.container`
    -   contains a title:
        -   tag: `h1`
        -   text: `Places`
        -   align in the top left
        -   font size: 30px
    -   contains multiple “Places” as listing (horizontal or vertical) describe by:
        -   tag: `article`
        -   width: 390px
        -   padding and margin 20px
        -   border #FF5A5F 1px with radius 4px
        -   contains the place name:
            -   tag: `h2`
            -   font size: 30px
            -   center horizontally

Requirements:

-   You must use: `header`, `footer`, `section`, `article`, `button`, `h1`, `h2`, `h3`, `h4`, `ul`, `li` tags
-   No inline style
-   You are not allowed to use the `img` tag
-   You are not allowed to use the `style` tag in the `head` tag
-   All images must be stored in the `images` folder
-   You must have 5 CSS files:
    -   `styles/4-common.css`: for the global style (i.e. `body` and `.container` styles)
    -   `styles/3-header.css`: for the header style
    -   `styles/3-footer.css`: for footer style
    -   `styles/6-filters.css`: for the filters style
    -   `styles/7-places.css`: for the places style

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/bca4d17fbe21a58b66a9d5d6b85df4801d147dd0.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `7-index.html, styles/4-common.css, styles/3-header.css, styles/3-footer.css, styles/6-filters.css, styles/7-places.css, images/`

View results

×

#### 7\. Display results

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 8\. More details

mandatory

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header, a footer, a filter box (dropdown list) and the result of the search.

Layout: (based on `7-index.html`)

Add more information to a Place `article`:

-   Price by night:
    -   tag: `div`
    -   classname: `price_by_night`
    -   same level as the place name
    -   font color: #FF5A5F
    -   border: #FF5A5F 4px rounded
    -   min width: 60px
    -   height: 60px
    -   font size: 30px
    -   align: the top right (with space)
-   Information section:
    -   tag: `div`
    -   classname: `information`
    -   height: 80px
    -   border: top and bottom #DDDDDD 1px
    -   contains (align vertically):
        -   Number of guests:
            -   tag: `div`
            -   classname: `max_guest`
            -   width: 100px
            -   fake text
            -   [icon](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/268/icon_group.png "icon")
        -   Number of bedrooms:
            -   tag: `div`
            -   classname: `number_rooms`
            -   width: 100px
            -   fake text
            -   [icon](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/268/icon_bed.png "icon")
        -   Number of bathrooms:
            -   tag: `div`
            -   classname: `number_bathrooms`
            -   width: 100px
            -   fake text
            -   [icon](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/268/icon_bath.png "icon")
-   User section:
    -   tag: `div`
    -   classname: `user`
    -   text `Owner: <fake text>`
    -   `Owner` text should be in bold
-   Description section:
    -   tag: `div`
    -   classname: `description`

Requirements:

-   You must use: `header`, `footer`, `section`, `article`, `button`, `h1`, `h2`, `h3`, `h4`, `ul`, `li` tags
-   No inline style
-   You are not allowed to use the `img` tag
-   You are not allowed to use the `style` tag in the `head` tag
-   All images must be stored in the `images` folder
-   You must have 5 CSS files:
    -   `styles/4-common.css`: for the global style (i.e. `body` and `.container` styles)
    -   `styles/3-header.css`: for the header style
    -   `styles/3-footer.css`: for the footer style
    -   `styles/6-filters.css`: for the filters style
    -   `styles/8-places.css`: for the places style

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/f4b2d4ef94bd3a2e7e1ddefa81236595686d270e.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `8-index.html, styles/4-common.css, styles/3-header.css, styles/3-footer.css, styles/6-filters.css, styles/8-places.css, images/`

View results

×

#### 8\. More details

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 9\. Full details

#advanced

Score: 65.0% (Checks completed: 100.0%)

Write an HTML page that displays a header, footer, a filters box with dropdown and results.

Layout: (based on `8-index.html`)

Add more information to a Place `article`:

-   List of Amenities:
    -   tag `div`
    -   classname `amenities`
    -   margin top 40px
    -   contains:
        -   title:
            -   tag `h2`
            -   text `Amenities`
            -   font size 16px
            -   border bottom #DDDDDD 1px
        -   list of amenities:
            -   tag `ul` / `li`
            -   no list style
            -   icons on the left: [Pet friendly](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/268/icon_pets.png "Pet friendly"), [TV](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/268/icon_tv.png "TV"), [Wifi](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/268/icon_wifi.png "Wifi"), etc… feel free to add more
-   List of Reviews:
    -   tag `div`
    -   classname `reviews`
    -   margin top 40px
    -   contains:
        -   title:
            -   tag `h2`
            -   text `Reviews`
            -   font size 16px
            -   border bottom #DDDDDD 1px
        -   list of review:
            -   tag `ul` / `li`
            -   no list style
            -   a review is described by:
                -   `h3` tag for the user/date description (font size 14px). Ex: “From Bob Dylan the 27th January 2017”
                -   `p` tag for the text (font size 12px)

Requirements:

-   You must use: `header`, `footer`, `section`, `article`, `button`, `h1`, `h2`, `h3`, `h4`, `ul`, `li` tags
-   No inline style
-   You are not allowed to use the `img` tag
-   You are not allowed to use the `style` tag in the `head` tag
-   All images must be stored in the `images` folder
-   You must have 5 CSS files:
    -   `styles/4-common.css`: for the global style (`body` and `.container` styles)
    -   `styles/3-header.css`: for the header style
    -   `styles/3-footer.css`: for the footer style
    -   `styles/6-filters.css`: for the filters style
    -   `styles/100-places.css`: for the places style

![](Project%200x01.%20AirBnB%20clone%20-%20Web%20static%20%20Cairo%20Intranet/f54486a431a05ea3477e337e0e953686d3c6ffd0.png)

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `100-index.html, styles/4-common.css, styles/3-header.css, styles/3-footer.css, styles/6-filters.css, styles/100-places.css, images/`

View results

×

#### 9\. Full details

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 10\. Flex

#advanced

Score: 65.0% (Checks completed: 100.0%)

Improve the Places section by using [Flexible boxes](https://intranet.alxswe.com/rltoken/Lnl-VfoXt8JDBBL6r5XRFA "Flexible boxes") for all Place articles

[Flexbox Froggy](https://intranet.alxswe.com/rltoken/PZz46Gkdj5Mo9-AWERPhQA "Flexbox Froggy")

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `101-index.html, styles/4-common.css, styles/3-header.css, styles/3-footer.css, styles/6-filters.css, styles/101-places.css, images/`

View results

×

#### 10\. Flex

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 11\. Responsive design

#advanced

Score: 65.0% (Checks completed: 100.0%)

Improve the page by adding [responsive design](https://intranet.alxswe.com/rltoken/VXunWO8vuxLDMxyEyPS-IA "responsive design") to display correctly in mobile or small screens.

Examples:

-   no horizontal scrolling
-   redesign search bar depending of the width
-   etc.

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `102-index.html, styles/102-common.css, styles/102-header.css, styles/102-footer.css, styles/102-filters.css, styles/102-places.css, images/`

View results

×

#### 11\. Responsive design

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 12\. Accessibility

#advanced

Score: 65.0% (Checks completed: 100.0%)

Improve the page by adding [Accessibility support](https://intranet.alxswe.com/rltoken/zF17PhhCy-d3RFQijBKlng "Accessibility support")

Examples:

-   Colors contrast
-   Header tags
-   etc.

___

Well done on completing this project! Let the world hear about this milestone achieved.

[Click here to tweet!](https://twitter.com/intent/tweet?text=I+have+successfully+completed+my+AirBnB+Web+Static+project+on+%23ALX_SE+%40facesofalxse)

___

**Repo:**

-   GitHub repository: `AirBnB_clone`
-   Directory: `web_static`
-   File: `103-index.html, styles/103-common.css, styles/103-header.css, styles/103-footer.css, styles/103-filters.css, styles/103-places.css, images/`