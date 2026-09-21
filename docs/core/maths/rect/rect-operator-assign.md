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

## [Rect](rect.md).operator=(const Rect&) / operator=(const Vector4&)

Copy-assign duplicates position and size; `Vector4`-assign unpacks `(x, y, z=width, w=height)`. Returns `*this` so assignments chain.

```cpp
Rect& operator=(const Rect& t);
Rect& operator=(const Vector4& v);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
