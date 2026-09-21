[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).operator-()

Flips the plane facing: returns `Plane(-normal.x, -normal.y, -normal.z, -d)`. Turns a floor into a ceiling with the same geometry.

```cpp
Plane operator-() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-operator-negate.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-operator-negate.h"
```
