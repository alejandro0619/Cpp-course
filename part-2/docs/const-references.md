You will often find code that uses const reference parameters. At first, that seems like a contradiction.

Reference parameters allow you to change the value of a variable from within another context. const seems to prevent such changes. 

The main value in const reference parameters is efficiency. When you pass a variable into a function, an entire copy is made. When you pass a reference, you are really just passing a pointer to the original so the computer doesn’t need to make the copy. By passing a const reference, you get the best of both
worlds — no copy is made but the original variable cannot be changed.

const references become more important when you are dealing with objects because they can be large
and making copies of them can have unwanted side effects