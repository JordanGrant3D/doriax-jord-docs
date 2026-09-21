---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).operator==(const Sphere& other)

Equality check on both `center` and `radius`. Detects that a zone has exactly reached its target shape after easing.

```cpp
bool operator==(const Sphere& other) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-operator-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
