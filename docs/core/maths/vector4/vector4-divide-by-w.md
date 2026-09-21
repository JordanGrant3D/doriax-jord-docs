---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).divideByW()

Perspective divide: replaces `x`, `y` and `z` with `x/w`, `y/w`, `z/w`. Converts a homogeneous clip-space position into NDC. `w` itself is left unchanged, so guard against `w == 0` first.

```cpp
void divideByW();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-divide-by-w.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-divide-by-w.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
