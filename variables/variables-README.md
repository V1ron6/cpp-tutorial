# variables

Declaring, initializing, and typing data. Corresponds to Chapters 2
("Variables"), 3 ("Literals and Constants"), and 16 ("The Preprocessor",
for `typedef`) of *The Rook's Guide to C++*.

| File | What it demonstrates |
|---|---|
| `variables1.cpp` | Declaring `int`, `char`, `double`, `bool`, and `std::string` variables, initialized at declaration, one block per type. |
| `variableAssigbed.cpp` | The same idea, more compact: `int`, `string`, `float`, `double` all assigned at declaration in one function. (Filename keeps the source repo's original spelling — "Assigbed" — rather than being silently renamed.) |
| `variableCONST.cpp` | `const double` used for a value that must never change (`PI`), computing a circle's circumference. |
| `variableDeclaredConstant.cpp` | A second `const` example (circle area *and* perimeter from a `const float pi`), showing the same pattern applied to a slightly bigger calculation. |
| `variableWithNamespace.cpp` | Two namespaces (`first`, `second`) each defining their own `x`, plus a plain global `x`, to show that a namespace scopes a name so the same identifier can mean different things in different contexts. |
| `valtypedef.cpp` | `typedef std::string str_t;` and modern `using number = int;` — two ways to alias a type for readability. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o variables1 variables1.cpp && ./variables1
```
(swap the filename for any other file in this folder)

## Bugs fixed
- **`variables1.cpp`**: `poweredon` was declared but never printed — a dead
  variable that undercut the file's own point (showing every declared
  boolean). Added its output line; renamed to `isFree`/`poweredOn` (camelCase,
  consistent with the rest of the file) and away from `free`, which shadows
  `std::free()` from `<cstdlib>`.
- **`variableAssigbed.cpp`**, **`variableDeclaredConstant.cpp`**: both used
  `using namespace std;`. Replaced with explicit `std::` prefixes so every
  file in the tutorial follows one consistent, and generally recommended,
  convention (a `using namespace std;` at file scope pulls the entire
  standard library into scope and can silently collide with your own names).
- **`variableAssigbed.cpp`**: typo `"a word sting"` → `"a word string"`.
- **`valtypedef.cpp`**: `typedef std::string str_t;` used without
  `#include <string>` (same accidental-transitive-include issue as the
  `input` files). Also, the file's comment *talked about* `using number = int;`
  but never actually used it — added a real `age` variable of type `number`
  so the concept the comment describes is demonstrated, not just narrated.
