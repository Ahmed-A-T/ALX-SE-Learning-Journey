# Responsive web design

### Overview
> 
> Before talking about media-queries, the backbone of responsive web design. Some basic elements are crucial and actually already implemented in our code. But it’s important to know about these in case you want to add responsive web design to an existing website.

### Viewport
> 
> The viewport is a meta seen in our first HTML advanced module. The width=device-width forces mobile browsers to adopt their real viewport width.

### Code example
>
>> ```
>> <head>
>>   <meta name="viewport" content="width=device-width, initial-scale=1, viewport-fit=cover">
>> </head>
>> ```

### Box-sizing
> 
> #### Code example
> 
>> ```
>> *, *:before, *:after {
>>   box-sizing: border-box;
>> }
>> ```
> 
> #### Resources
> 
> Read more [Responsive Web Design Basics | Web Fundamentals | Google Developers](https://web.dev/articles/responsive-web-design-basics "Responsive Web Design Basics  |  Web Fundamentals  |  Google Developers")
