---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).translateInPlace(float x, float y, float z)

Shifts the translation column in place (rotation-aware: the offset rides through the current rows) and returns `*this`. Nudges a spawn without rebuilding it.

```cpp
Matrix4& translateInPlace(float x, float y, float z);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-translate-in-place.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-translate-in-place.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
