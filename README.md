<h1> Holberton Version of printf </h1>

<img src="https://course_report_production.s3.amazonaws.com/rich/rich_files/rich_files/5169/s300/instagram-feed180.jpg" alt="Holberton">

<h6> Our goal in this project is to create our version of printf along with all of its capabilities </h6>

<h5> Holberton School students were put to the test with the task of recreating printf with specific requirements </h5>

<h2> The Function </h2>

<p> The function prototype we used consists of two paramaters: "_printf(const char *format, ...)" Here we are formatting a string that takes specific flags according to its flag... Wel get a little deeper into that later on" <p>

<strong> #include "holberton.h"

int printf(const char *format, ...);
<br> int index = 0;
<br> if (format[index] == %)
<br> {
printf(format);
<br> }
<br> return(index); </strong>

<h3> Inputs of printf </h3>
<ul>
	<li> Format: A string that contains the text to be written to stdout. 
	<br> It can optionally contains format placeholder specifiers (eg: %s, %d, and %i) that will replaced by the value specified in additional arguments. </li> 
	<li> Return: return length of the buffer. if error, return -1 </li>
</ul>
