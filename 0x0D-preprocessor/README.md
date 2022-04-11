# The C Preprocessor.
The C preprocessor modifies a source code file before handing it over to the compiler. Preprocessor uses include directives, constants, and macros. 

## Uses of c preprocessor.
- Header File.
Using the #include preprocessor directive that includes code of another file into current file.

- Macros.
Using the #define preprocessor directive to define constants values that can be used throughout the code.

- Conditional Compilation.
Can be achieved by using #if directive


## Macros.
Type of macros; 
1. ### Object-like Macros.
Used to give symbolic names to numeric constants created using the #define directive e.g. 
	```
		#define PI 3.14
	```
2. ### Macro functions and Arguments.
Used to execute code and provide a value. e.g.
	```
		#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
	```

3. ### Predefined macros.
Macros already defined in the language compilation. They start with double underscores e.g
   ```
	__File__
   ```
__FILE__ This macro expands to the name of the current input file, in the form of a C string constant.

# Tasks
## 0-object_like_macro.h
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

## 1-pi.h
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.








