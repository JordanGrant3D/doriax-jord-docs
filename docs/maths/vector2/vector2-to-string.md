###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).toString()

Returns `"Vector2(x, y)"` via `std::to_string`. Print it with `Log::print` for mouse and stick debugging.

```cpp
std::string toString() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-to-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-to-string.h"
```
