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

## [Sphere](sphere.md).surfaceArea()

Returns `4 * pi * r^2`, the surface area of the sphere. Budgets particle emission or decal coverage over a zone's shell.

```cpp
float surfaceArea() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-surface-area.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-surface-area.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
