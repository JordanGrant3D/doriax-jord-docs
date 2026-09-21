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

## [Rect](rect.md).isZero()

Returns `true` when `x`, `y`, `width` and `height` are all exactly zero. Detects an uninitialized or collapsed layout rect.

```cpp
bool isZero() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-is-zero.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-is-zero.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
