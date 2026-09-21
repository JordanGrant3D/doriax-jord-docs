[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).operator/(const Vector4&) / operator/(float)

Component-wise division normalizes each channel against a per-channel maximum; scalar division dims uniformly. A free `float / Vector4` overload covers the reversed order.

```cpp
Vector4 operator/(const float fScalar) const;
Vector4 operator/(const Vector4& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-divide.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-divide.h"
```
