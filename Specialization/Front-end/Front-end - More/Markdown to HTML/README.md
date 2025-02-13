# Markdown to HTML

PythonHTML

-   Weight: 1
-   Project over - took place from Aug 5, 2024 7:00 AM to Aug 12, 2024 7:00 AM
-   An auto review will be launched at the deadline

# Description

Markdown is awesome! All your README.md are made in Markdown, but do you know how GitHub are rendering them?

It’s time to code a Markdown to HTML!

## Requirements

-   All your files will be interpreted/compiled on Ubuntu 18.04 LTS using `python3` (version 3.7 or higher)
-   The first line of all your files should be exactly `#!/usr/bin/python3`
-   A `README.md` file, at the root of the folder of the project, is mandatory
-   Your code should use the `PEP 8` style (version 1.7.\*)
-   All your files must be executable
-   All your modules should be documented: `python3 -c 'print(__import__("my_module").__doc__)'`
-   Your code should not be executed when imported (by using `if __name__ == "__main__":`)

## Tasks

### 0\. Start a script

#advanced

Write a script `markdown2html.py` that takes an argument 2 strings:

-   First argument is the name of the Markdown file
-   Second argument is the output file name

Requirements:

-   If the number of arguments is less than 2: print in STDERR `Usage: ./markdown2html.py README.md README.html` and exit 1
-   If the Markdown file doesn’t exist: print in STDER `Missing <filename>` and exit 1
-   Otherwise, print nothing and exit 0

```
guillaume@vagrant:~/$ ./markdown2html.py
Usage: ./markdown2html.py README.md README.html
guillaume@vagrant:~/$ echo $?
1
guillaume@vagrant:~/$
guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
Missing README.md
guillaume@vagrant:~/$ echo $?
1
guillaume@vagrant:~/$
guillaume@vagrant:~/$ echo "Test" &gt; README.md
guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
guillaume@vagrant:~/$ 
```

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `markdown2html.py`

Check submission

×

#### 0\. Start a script

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 1\. Headings

#advanced

Improve `markdown2html.py` by parsing Headings Markdown syntax for generating HTML:

**Syntax:** (you can assume it will be strictly this syntax)

| Markdown | HTML generated |
| --- | --- |
| `# Heading level 1` | `<h1>Heading level 1</h1>` |
| `## Heading level 2` | `<h2>Heading level 1</h2>` |
| `### Heading level 3` | `<h3>Heading level 1</h3>` |
| `#### Heading level 4` | `<h4>Heading level 1</h4>` |
| `##### Heading level 5` | `<h5>Heading level 1</h5>` |
| `###### Heading level 6` | `<h6>Heading level 1</h6>` |

```
guillaume@vagrant:~/$ cat README.md
# My title
## My title2
# My title3
#### My title4
### My title5

guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
guillaume@vagrant:~/$ cat README.html 
&lt;h1&gt;My title&lt;/h1&gt;
&lt;h2&gt;My title2&lt;/h2&gt;
&lt;h1&gt;My title3&lt;/h1&gt;
&lt;h4&gt;My title4&lt;/h4&gt;
&lt;h3&gt;My title5&lt;/h3&gt;
guillaume@vagrant:~/$ 
```

Spacing and new lines between HTML tags don’t need to be exactly this one

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `markdown2html.py`

Check submission

×

#### 1\. Headings

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 2\. Unordered listing

#advanced

Improve `markdown2html.py` by parsing Unordered listing syntax for generating HTML:

**Syntax:** (you can assume it will be strictly this syntax)

Markdown:

```
- Hello
- Bye
```

HTML generated:

```
&lt;ul&gt;
    &lt;li&gt;Hello&lt;/li&gt;
    &lt;li&gt;Bye&lt;/li&gt;
&lt;/ul&gt;
```

```
guillaume@vagrant:~/$ cat README.md
# My title
- Hello
- Bye

guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
guillaume@vagrant:~/$ cat README.html 
&lt;h1&gt;My title&lt;/h1&gt;
&lt;ul&gt;
&lt;li&gt;Hello&lt;/li&gt;
&lt;li&gt;Bye&lt;/li&gt;
&lt;/ul&gt;
guillaume@vagrant:~/$ 
```

Spacing and new lines between HTML tags don’t need to be exactly this one

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `markdown2html.py`

Check submission

×

#### 2\. Unordered listing

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 3\. Ordered listing

#advanced

Improve `markdown2html.py` by parsing Ordered listing syntax for generating HTML:

**Syntax:** (you can assume it will be strictly this syntax)

Markdown:

```
* Hello
* Bye
```

HTML generated:

```
&lt;ol&gt;
    &lt;li&gt;Hello&lt;/li&gt;
    &lt;li&gt;Bye&lt;/li&gt;
&lt;/ol&gt;
```

```
guillaume@vagrant:~/$ cat README.md
# My title
* Hello
* Bye

guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
guillaume@vagrant:~/$ cat README.html 
&lt;h1&gt;My title&lt;/h1&gt;
&lt;ol&gt;
&lt;li&gt;Hello&lt;/li&gt;
&lt;li&gt;Bye&lt;/li&gt;
&lt;/ol&gt;
guillaume@vagrant:~/$ 
```

Spacing and new lines between HTML tags don’t need to be exactly this one

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `markdown2html.py`

Check submission

×

#### 3\. Ordered listing

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 4\. Simple text

#advanced

Improve `markdown2html.py` by parsing paragraph syntax for generating HTML:

**Syntax:** (you can assume it will be strictly this syntax)

Markdown:

```
Hello

I'm a text
with 2 lines
```

HTML generated:

```
&lt;p&gt;
    Hello
&lt;/p&gt;
&lt;p&gt;
    I'm a text
        &lt;br /&gt;
    with 2 lines
&lt;/p&gt;
```

```
guillaume@vagrant:~/$ cat README.md
# My title
- Hello
- Bye

Hello

I'm a text
with 2 lines

guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
guillaume@vagrant:~/$ cat README.html 
&lt;h1&gt;My title&lt;/h1&gt;
&lt;ul&gt;
&lt;li&gt;Hello&lt;/li&gt;
&lt;li&gt;Bye&lt;/li&gt;
&lt;/ul&gt;
&lt;p&gt;
Hello
&lt;/p&gt;
&lt;p&gt;
I'm a text
&lt;br/&gt;
with 2 lines
&lt;/p&gt;
guillaume@vagrant:~/$ 
```

Spacing and new lines between HTML tags don’t need to be exactly this one

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `markdown2html.py`

Check submission

×

#### 4\. Simple text

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 5\. Bold and emphasis text

#advanced

Improve `markdown2html.py` by parsing bold syntax for generating HTML:

**Syntax:** (you can assume it will be strictly this syntax)

| Markdown | HTML generated |
| --- | --- |
| `**Hello**` | `<b>Hello</b>` |
| `__Hello__` | `<em>Hello</em>` |

```
guillaume@vagrant:~/$ cat README.md
# My title
- He**l**lo
- Bye

Hello

I'm **a** text
with __2 lines__

**Or in bold**

guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
guillaume@vagrant:~/$ cat README.html 
&lt;h1&gt;My title&lt;/h1&gt;
&lt;ul&gt;
&lt;li&gt;He&lt;b&gt;l&lt;/b&gt;lo&lt;/li&gt;
&lt;li&gt;Bye&lt;/li&gt;
&lt;/ul&gt;
&lt;p&gt;
Hello
&lt;/p&gt;
&lt;p&gt;
I'm &lt;b&gt;a&lt;/b&gt; text
&lt;br/&gt;
with &lt;em&gt;2 lines&lt;/em&gt;
&lt;/p&gt;
&lt;p&gt;
&lt;b&gt;Or in bold&lt;/b&gt;
&lt;/p&gt;
guillaume@vagrant:~/$ 
```

Spacing and new lines between HTML tags don’t need to be exactly this one

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `markdown2html.py`

Check submission

×

#### 5\. Bold and emphasis text

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 6\. ... but why??

#advanced

Improve `markdown2html.py` by parsing bold syntax for generating HTML:

**Syntax:** (you can assume it will be strictly this syntax)

| Markdown | HTML generated | description |
| --- | --- | --- |
| `[[Hello]]` | `8b1a9953c4611296a827abf8c47804d7` | convert in MD5 (lowercase) the content |
| `((Hello Chicago))` | `Hello hiago` | remove all `c` (case insensitive) from the content |

```
guillaume@vagrant:~/$ cat README.md
# My title
- He**l**lo
- Bye

Hello

I'm **a** text
with __2 lines__

((I will live in Caracas))

But it's [[private]]

So cool!

guillaume@vagrant:~/$ ./markdown2html.py README.md README.html 
guillaume@vagrant:~/$ cat README.html 
&lt;h1&gt;My title&lt;/h1&gt;
&lt;ul&gt;
&lt;li&gt;He&lt;b&gt;l&lt;/b&gt;lo&lt;/li&gt;
&lt;li&gt;Bye&lt;/li&gt;
&lt;/ul&gt;
&lt;p&gt;
Hello
&lt;/p&gt;
&lt;p&gt;
I'm &lt;b&gt;a&lt;/b&gt; text
&lt;br/&gt;
with &lt;em&gt;2 lines&lt;/em&gt;
&lt;/p&gt;
&lt;p&gt;
I will live in araas
&lt;/p&gt;
&lt;p&gt;
But it's 2c17c6393771ee3048ae34d6b380c5ec
&lt;/p&gt;
&lt;p&gt;
So cool!
&lt;/p&gt;
guillaume@vagrant:~/$ 
```

Spacing and new lines between HTML tags don’t need to be exactly this one

**Repo:**

-   GitHub repository: `alx-frontend-for-fun`
-   File: `markdown2html.py`