###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).getX()

Returns the `x` field. Reads the left edge without exposing the field for writing.

```cpp
float getX() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-get-x.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-get-x.h"
```
