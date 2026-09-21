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

## [Rect](rect.md).getVector()

Packs the rectangle into a `Vector4(x, y, width, height)` for shader uniforms or Vector4 math. Inverse of the `Rect(const Vector4&)` constructor and `operator=(const Vector4&)`.

```cpp
Vector4 getVector();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-get-vector.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-get-vector.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
