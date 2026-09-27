# switch

`switch` as a readable alternative to a long `if / else if / else if / ...`
chain when you're comparing one variable against several fixed values.

| File | What it demonstrates |
|---|---|
| `switch.cpp` | Maps an `int day` (1–7) to a weekday name, one `case` per day, each ending in `break`, with a `default` to catch anything outside 1–7. |

## Build & run
```sh
g++ -std=c++17 -Wall -Wextra -o switch switch.cpp && ./switch
```

## Notes
- Every `case` here ends in `break`. Leaving one out is the single most
  common `switch` bug in real code: execution "falls through" into the
  next case instead of stopping, running both bodies. Worth trying by hand:
  delete a `break` and see `Tuesday` print `Wednesday` too.
- No functional bug found here; only the header spacing (`#include<iostream>`
  → `#include <iostream>`) and a comment typo ("un organized" → "disorganized")
  were cleaned up.
