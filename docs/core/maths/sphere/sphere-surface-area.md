[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
