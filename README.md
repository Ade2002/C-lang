# C-lang

command to execute the c file ctrl + shift b 
then ./main to see the output in console

git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/Ade2002/C-lang.git;
git push -u origin main
 
 # int main
int main() this is beginning of the program It calls other functions
# printf()
printf() is a method for printing out instructions to the screen, console or whateever.

# \n
\n in c functions is a new line character for new lines so basically once the prinf method instructions runs its moves on to a new line and runs the next instructions.
# String
A string is composed of characters, each of which is printed exactly as it appears, To identify the start of the string, we put a doublequote (") at the front. To identify the end of the string we put another double-quote at the end.
So printf("xyz"); would simply print an x, then a y, and finally a z

if we want to actually print a double-quote? We can’t exactly put a double-quote in the middle of the string because it would be mistaken for the end-of-string marker. Double-quote is a special character. The normal print-what-you-see rules do not apply in C.

# backslash virgue \
Different languages take different approaches to
this problem. Some require the special character to
be entered twice. C uses backslash (virgule, \) as
an escape character to change the meaning of the
next character after it. Thus, to print a doublequote you type in backslash double-quote. To print
a backslash, you must escape it by typing another
backslash in front of it. The first backslash means
“give the next character its alternate meaning.” The
second backslash has an alternate meaning of “print
a backslash.”
Without a backslash, special characters have a
natural special meaning. With a backslash they
print as they appear
