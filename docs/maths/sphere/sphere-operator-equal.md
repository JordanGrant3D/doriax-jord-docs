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
