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

## [Plane](plane.md).d

Signed distance offset of the plane: surface points satisfy `normal.dotProduct(p) + d == 0`. Raising `d` lifts a ground plane upward.

```cpp
float d;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
