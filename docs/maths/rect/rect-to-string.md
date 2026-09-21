###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).toString()

Returns `"Rect(x, y, width, height)"` via `std::to_string`. Print it with `Log::print` when debugging HUD layouts.

```cpp
std::string toString() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-to-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-to-string.h"
```
