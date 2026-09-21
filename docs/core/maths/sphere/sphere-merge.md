[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).merge(const Sphere& other)

Expands the sphere in place into the smallest bounding sphere enclosing both itself and `other`. Grows a patrol zone to cover a new waypoint.

```cpp
void merge(const Sphere& other);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-merge.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-merge.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
