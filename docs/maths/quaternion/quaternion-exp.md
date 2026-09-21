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

## [Quaternion](quaternion.md).exp()

Quaternion exponential. Integrates a scaled angular-velocity vector into a rotation step each frame.

```cpp
Quaternion exp() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-exp.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-exp.h"
```
