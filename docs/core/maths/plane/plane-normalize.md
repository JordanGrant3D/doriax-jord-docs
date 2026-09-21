---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).normalize()

Normalizes the plane in place (scales `normal` to unit length and `d` by the same factor) and returns `*this`. Required after hand-building planes from non-unit normals before distance checks mean metres.

```cpp
Plane& normalize();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-normalize.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-normalize.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
