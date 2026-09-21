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

## [Plane](plane.md).operator==(const Plane& rhs)

Equality check on both `normal` and `d`. Confirms a rebuilt ground plane converged back to the authored floor.

```cpp
bool operator==(const Plane& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-operator-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
