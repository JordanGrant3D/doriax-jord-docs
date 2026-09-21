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

## [Rect](rect.md).getY()

Returns the `y` field. Reads the top edge without exposing the field for writing.

```cpp
float getY() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-get-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-get-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
