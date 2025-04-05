# A Crash Course on Accessibility

## Overview
> 
> WCAG is a set of guidelines, created by the [W3C](https://www.w3.org/ "W3C"), for making digital content accessible for all users, including people with disabilities.

### WCAG timeline
> 
> -   1999: WCAG 1.0 released by W3C
> -   2008: WCAG 2.0 (current version) released
> -   2012: WCAG 2.0 became ISO standard
> -   2017: WCAG 2.1 draft under public review
> -   2018: WCAG 2.1 became ISO standard
> -   2020: WCAG 2.2 working draft and WCAG 3.0 (called “Silver”) is also in working phase

### 4 principles
> 
> WCAG is organized around four principles often called by the acronym **POUR**:
> 
> **Perceivable**: Can users perceive the content? This helps us keep in mind that just because something is perceivable with one sense, such as sight, that doesn’t mean that all users can perceive it.
> 
> **Operable**: Can users use UI components and navigate the content? For example, something that requires a hover interaction cannot be operated by someone who can’t use a mouse or touch screen.
> 
> **Understandable**: Can users understand the content? Can users understand the interface and is it consistent enough to avoid confusion?
> 
> **Robust**: Can the content be consumed by a wide variety of user agents (browsers)? Does it work with assistive technology?

## Accessibility Levels
> 
> After defining the 4 principles, WCAG defined 3 differents levels, the two first being absolutely required for any business and website. AAA level is recommended but not required as it may have bigger impacts on designs.

### Levels
> 
> #### Level A (required)
> 
> **A**: This level improves accessibility for most sites by making it easier for browsing readers to navigate a site and translate its content, but it is still pretty basic.
> 
> #### Level AA (required)
> 
> **AA**: This level makes content accessible to people with a wider range of disabilities by providing guidance on elements such as color contrast and error identification. Regulators prefer this level.
> 
> #### Level AAA (optional)
> 
> **AAA**: The highest level of accessibility compliance, this makes content accessible to the widest range of people, but it can significantly alter the design of a site. Government legislation doesn’t typically require this because it’s not always possible to conform.

### Resources
> 
> [Accessibility Conformance Levels: Standards](https://www.levelaccess.com/blog/ada-compliance-levels/ "Accessibility Conformance Levels: Standards")

## ARIA (Accessible Rich Internet Applications)
> 
> ARIA is a specification from the W3C and created to improve accessibility of applications by providing extra information to assistive technologies, such as screen readers, via attributes which could be added to HTML.
> 
> **Warning!**
> 
> Use native HTML elements: Always use HTML elements whenever possible and try to not re-create element adding an ARIA role. Don’t use ARIA as a quick-fix.

### Categories
> 
> #### ARIA Roles
> 
> [ARIA Roles](https://www.w3.org/TR/wai-aria/#roles_categorization "ARIA Roles")
> 
> #### ARIA States and Properties
> 
> [ARIA States and Properties](https://www.w3.org/TR/wai-aria/#states_and_properties "ARIA States and Properties")

### Resources
> 
> -   [First Rule of ARIA Use](https://www.w3.org/TR/using-aria/#rule1 "First Rule of ARIA Use")
> -   [Introduction to ARIA | Web Fundamentals | Google Developers](https://web.dev/articles/semantics-aria "Introduction to ARIA  |  Web Fundamentals  |  Google Developers")
> -   [Getting started with ARIA - The A11Y Project](https://www.a11yproject.com/posts/getting-started-aria/ "Getting started with ARIA - The A11Y Project")
> -   [An overview of accessible web applications and widgets - Accessibility | MDN](https://developer.mozilla.org/en-US/docs/Web/Accessibility/Guides/Accessible_web_applications_and_widgets "An overview of accessible web applications and widgets - Accessibility | MDN")
> -   [WAI-ARIA: Top 6 Mistakes to Avoid | Deque](https://www.deque.com/blog/wai-aria-top-6-mistakes-to-avoid/ "WAI-ARIA: Top 6 Mistakes to Avoid | Deque")
> -   [WebAIM: To ARIA! The Cause of, and Solution to, All Our Accessibility Problems](https://webaim.org/blog/aria-cause-solution/ "WebAIM: To ARIA! The Cause of, and Solution to, All Our Accessibility Problems")

## A11y testing tools
> 
> When we talk about Web Accessibility Tools, we need to differentiate between automated tools and manual tools.
> 
> Based on [Tenon.io](https://www.levelaccess.com/tenon-retiring-faqs/ "Tenon.io") insights, around 49% of tests are automated (using Axe, Lighthouse etc) and 55% are manual (Screen readers, code analysis etc).

### Companies dedicated to A11y
> 
> [Siteimprove](https://www.siteimprove.com/ "Siteimprove"), Tenon.io, [Deque](https://www.deque.com/ "Deque") and [The Paciello Group](https://www.tpgi.com/ "The Paciello Group") are amount the most famous company working with Web Accessibility.
> 
> #### Deque Systems
> 
> Deque developed an engine called **`axe-core`**, which is use by [Lighthouse](https://developer.chrome.com/docs/lighthouse/overview/ "Lighthouse"), a [Web Accessibilty Testing](https://chromewebstore.google.com/detail/axe-devtools-web-accessib/lhdoppojpmngadmnindnejefpokejbdd "Web Accessibilty Testing") tool, and [webhint](https://intranet.alxswe.com/rltoken/TjXUUK_tkOxEBGoll4p24g "webhint").

### Example of accessibility tools inside Chrome Developer tools
> 
> On Chrome (and Firefox), you can find a color contrast checker available when you select an element to inspect.
> 
> You can also see the accessibility tree and all properties attached to an element in the right panel of the Google Developer tool.

### Screen Readers
> 
> Few different screen readers exist. On Apple products, VoiceOver is the one usually used. Jaws is famous but expensive. NVDA is an open source version that is more an more used in replacement to the expensive Jaws windows software.
> 
> You can see in the graphic below that JAWS, NVDA and VoiceOver were the most used late 2017.
> 
> #### How to enable VoiceOver on Mac OSX
> 
> -   Go to your preferences
> -   Choose **`Accessibility`**
> -   On the **`VoiceOver`** tab, choose to enable VoiceOver. I recommend to learn the shortcut **`⌘ + F5`** to easily enable / disable VoiceOver.
> 
> #### Basic shortcuts for VoiceOver (only on Mac OSX)
> 
> You can play to see how VoiceOver works. Here are some important shortcuts, like the **`Next heading`** that shows how important it is to have good headings.
> 
> -   VoiceOver ON/OFF: Command + F5 (Mac: **`⌘ + Fn + F5`**)
> -   Start reading: VO (**`⌘ + ⌥`**) + A
> -   Stop reading: **`CTRL`**
> -   Open rotor: VO (**`⌘ + ⌥`**) + U
> -   Next heading: **`⌘`** + VO + H
> -   Next link: **`⌘`** + VO + L
> -   Next graphic: **`⌘`** + VO + G
> 
> #### Screen readers and voice tools
> 
> -   [JAWS Screen Reader - Best in Class](https://www.freedomscientific.com/Products/software/JAWS/ "JAWS Screen Reader - Best in Class")
> -   [NV Access | Download](https://www.nvaccess.org/download/ "NV Access | Download")
> -   [Vision Accessibility - Mac - Apple (CA)](https://www.apple.com/ca/accessibility/vision/ "Vision Accessibility - Mac - Apple (CA)")
> -   [Dragon NaturallySpeaking - world’s best-selling speech recognition software | Nuance](https://www.nuance.com/dragon.html "Dragon NaturallySpeaking - world's best-selling speech recognition software | Nuance")
> 
> ### Resources
> 
> -   [Button Contrast Checker | Aditus | Free tool](https://www.aditus.io/button-contrast-checker/ "Button Contrast Checker | Aditus | Free tool")
> -   [Web Accessibility Evaluation Tools List](https://www.w3.org/WAI/test-evaluate/tools/list/ "Web Accessibility Evaluation Tools List")
> -   [WAVE Web Accessibility Tool](https://wave.webaim.org/ "WAVE Web Accessibility Tool")
> -   [Accessibility testing tools – Updated May 2019 | TPG – The Accessibility Experts](https://www.tpgi.com/accessibility-testing-tools-we-use/ "Accessibility testing tools – Updated May 2019 | TPG – The Accessibility Experts")
> -   [9 Tools for Website Accessibility Testing](https://www.shopify.com/ca/partners/blog/website-accessibility-testing "9 Tools for Website Accessibility Testing")
> -   [Top 25 Awesome Accessibility Testing Tools for Websites](https://dynomapper.com/blog/27-accessibility-testing/246-top-25-awesome-accessibility-testing-tools-for-websites "Top 25 Awesome Accessibility Testing Tools for Websites")

## Keyboard Navigation
> 
> Some people can’t use a mouse to navigate on webpages. It’s important to test your pages using only the keyboard (some people only use a [switch button](https://www.24a11y.com/2018/i-used-a-switch-control-for-a-day/ "switch button") to navigate and do tasks on a device).

### Keyboard Tabbing Order
> 
> If you tab to go throw all links in the article page, you will see that the aside comes after the link inside the content. That is not ideal but we will not change it in our example.

### Resources
> 
> -   [WebAIM: Keyboard Accessibility](https://webaim.org/techniques/keyboard/ "WebAIM: Keyboard Accessibility")
> -   [Designing for Keyboard Accessibility | Accessible Technology](https://www.washington.edu/accesstech/checklist/keyboard/ "Designing for Keyboard Accessibility | Accessible Technology")
> -   [outline - CSS: Cascading Style Sheets | MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/outline "outline - CSS: Cascading Style Sheets | MDN")
> -   [I Threw Away my Mouse - 24 Accessibility](https://www.24a11y.com/2018/i-threw-away-my-mouse/ "I Threw Away my Mouse - 24 Accessibility")
> -   [Tab order | UX design | Accessibility for Teams](https://digital.gov/guides/accessibility-for-teams/ "Tab order | UX design | Accessibility for Teams")

## Skip Links
> 
> Links that facilitate navigation when the user is using the keyboard. It allows the user to go directly to the most important sections of the page.
> 
> 2.4.1 Bypass Blocks: A mechanism is available to bypass blocks of content that are repeated on multiple Web pages. – WCAG 2.1

### Resources
> 
> -   [WebAIM: “Skip Navigation” Links](https://webaim.org/techniques/skipnav/ "WebAIM: "Skip Navigation" Links")
> -   [How-to: Use skip navigation links - The A11Y Project](https://www.a11yproject.com/posts/skip-nav-links/ "How-to: Use skip navigation links - The A11Y Project")
> -   [Your skip links are broken - Axess Lab](https://axesslab.com/skip-links/ "Your skip links are broken - Axess Lab")
> -   [A11Y Style Guide - Skip Links](https://a11y-style-guide.com/style-guide/section-general.html#kssref-general-skip-links "A11Y Style Guide - Skip Links")

---
