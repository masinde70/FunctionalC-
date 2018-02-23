# FunctionalC-
LearningFunctionalC++

Two-Phase Translation
An attempt to instantiate a template for a type that doesn't support all operations used within it will result in compile time error

Thus, templates are compiled in two phases:
1. Without instantiation at definition time
  -the template code itself is checked for correctness igoring
  -Syntax errors are discoverd, such as missing semicolons.
  -Using unknown names(type names, function names, ...) that don't depend on template paramaters are discovered
  -Static assertions that don't depend on template parameters are checked
2. At instantiation time, the template code is checked.(again) to ensure that all code is valid. That is, now especially, all parts that depend on the template parameters are double-checked

#Type Conversions During Type Deduction

Note that automatic type conversions are limited during type deduction:
 • When declaring call parameters by reference, even trivial conversions do not apply to type deduc-
  tion. Two arguments declared with the same template parameter T must match exactly.
• When declaring call parameters by value, only trivial conversions that decay are supported: Qual-
  ifications with const or volatile are ignored, references convert to the referenced type, and raw
  arrays or functions convert to the corresponding pointer type. For two arguments declared with
  the same template parameter T the decayed types must match.
