###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).getWidth()

Returns the `width` field. Reads a panel's horizontal size without exposing the field for writing.

```cpp
float getWidth() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-get-width.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-get-width.h"
```
