---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).getHeight()

Returns the `height` field. Reads a panel's vertical size without exposing the field for writing.

```cpp
float getHeight() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-get-height.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-get-height.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
