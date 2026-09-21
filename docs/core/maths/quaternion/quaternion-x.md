[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).x

X of the vector part (`axis.x * sin(halfAngle)`). Spins a yawed character's lean without touching yaw.

```cpp
float x;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-x.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-x.h"
```
