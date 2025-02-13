# Fun with CSS

CSSFront-end

-   Weight: 1
-   Project over - took place from Sep 2, 2024 7:00 AM to Sep 9, 2024 7:00 AM

In this project, you will experiment and implement fun layout with HTML and CSS **ONLY**!

Yes, no JavaScript!

Enjoy!

## Tasks

### 0\. Sprite languages

#advanced

By using this HTML:

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
    &lt;head&gt;
        &lt;meta charset="UTF-8" /&gt;
        &lt;title&gt;HBTN - 0- Sprite&lt;/title&gt;

        &lt;link href="0-styles.css" media="all" rel="stylesheet" type="text/css"&gt;
    &lt;/head&gt;
    &lt;body&gt;
        &lt;ul&gt;
            &lt;li&gt;HTML&lt;span class="icon i-html"&gt;&lt;/span&gt;&lt;/li&gt;
            &lt;li&gt;CSS&lt;span class="icon i-css"&gt;&lt;/span&gt;&lt;/li&gt;
            &lt;li&gt;JavaScript&lt;span class="icon i-js"&gt;&lt;/span&gt;&lt;/li&gt;
        &lt;/ul&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

And this image file: [0-sprite.png](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/2/d416199ca6ecdbd0f8a3.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250213%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250213T161248Z&X-Amz-Expires=345600&X-Amz-SignedHeaders=host&X-Amz-Signature=af3b54033692a073da2f045ef9145e8b251cdf36daca7a705b2bb528047bf057 "0-sprite.png")

Create `0-styles.css` and generate this layout:

![](Project%20Fun%20with%20CSS%20%20Cairo%20Intranet/94aa60f76c412f40a87b.png)

You are not allowed to change the image and the HTML - _sprite is cool!_

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `0-styles.css`

### 1\. Move the (under)line

#advanced

By using this HTML:

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
    &lt;head&gt;
        &lt;meta charset="UTF-8" /&gt;
        &lt;title&gt;HBTN - 1- Underline&lt;/title&gt;

        &lt;link href="1-styles.css" media="all" rel="stylesheet" type="text/css"&gt;
    &lt;/head&gt;
    &lt;body&gt;
        &lt;h2&gt;
            Hello &lt;a href="https://www.alxafrica.com"&gt;ALX!&lt;/a&gt;
        &lt;/h2&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

Create `1-styles.css` and generate this layout where the underline is hidden by default and appeared slowly…:

![](Project%20Fun%20with%20CSS%20%20Cairo%20Intranet/b791cfdbd11c0eefa5f7.gif)

You are not allowed to change the HTML

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `1-styles.css`

### 2\. Toggle

#advanced

By using this HTML:

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
    &lt;head&gt;
        &lt;meta charset="UTF-8" /&gt;
        &lt;title&gt;HBTN - 2- toggle&lt;/title&gt;

        &lt;link href="2-styles.css" media="all" rel="stylesheet" type="text/css"&gt;
    &lt;/head&gt;
    &lt;body&gt;
        &lt;div class="toggle"&gt;
            &lt;input type="checkbox" name="toggle" class="toggle-cb" id="toggle-0" checked&gt;
            &lt;label class="toggle-label" for="toggle-0"&gt;
                &lt;div class="toggle-inner"&gt;&lt;/div&gt;
                &lt;div class="toggle-switch"&gt;&lt;/div&gt;
            &lt;/label&gt;
        &lt;/div&gt;
    &lt;/body&gt;
&lt;/html&gt;
```

Create `2-styles.css` and generate this layout where the `<input>` is has this custom toggle layout:

**Checked:**

![](Project%20Fun%20with%20CSS%20%20Cairo%20Intranet/3848b025c8f25636bba5.png)

**Unchecked:**

![](Project%20Fun%20with%20CSS%20%20Cairo%20Intranet/aeae59fdee93b17f360f.png)

You are not allowed to change the HTML

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `2-styles.css`

### 3\. Menu

#advanced

By using this HTML:

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
    &lt;head&gt;
        &lt;meta charset="UTF-8" /&gt;
        &lt;title&gt;HBTN - 2- toggle&lt;/title&gt;

        &lt;link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css"&gt;
        &lt;link href="3-styles.css" media="all" rel="stylesheet" type="text/css"&gt;
    &lt;/head&gt;
    &lt;body&gt;

        &lt;nav class="menu"&gt;
            &lt;input type="checkbox" href="#" class="menu-open" name="menu-open" id="menu-open"/&gt;
            &lt;label class="menu-open-button" for="menu-open"&gt;
                &lt;span class="menu-line menu-line-1"&gt;&lt;/span&gt;
                &lt;span class="menu-line menu-line-2"&gt;&lt;/span&gt;
                &lt;span class="menu-line menu-line-3"&gt;&lt;/span&gt;
            &lt;/label&gt;

            &lt;a href="#" class="menu-item"&gt; &lt;i class="fa fa-area-chart"&gt;&lt;/i&gt; &lt;/a&gt;
            &lt;a href="#" class="menu-item"&gt; &lt;i class="fa fa-bar-chart"&gt;&lt;/i&gt; &lt;/a&gt;
            &lt;a href="#" class="menu-item"&gt; &lt;i class="fa fa-line-chart"&gt;&lt;/i&gt; &lt;/a&gt;
            &lt;a href="#" class="menu-item"&gt; &lt;i class="fa fa-pie-chart"&gt;&lt;/i&gt; &lt;/a&gt;
            &lt;a href="#" class="menu-item"&gt; &lt;i class="fa fa-table"&gt;&lt;/i&gt; &lt;/a&gt;
        &lt;/nav&gt;

    &lt;/body&gt;
&lt;/html&gt;
```

Create `3-styles.css` and generate this layout/animation:

![](Project%20Fun%20with%20CSS%20%20Cairo%20Intranet/252a25667dc7c65fe0e9.gif)

You are not allowed to change the HTML

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `3-styles.css`