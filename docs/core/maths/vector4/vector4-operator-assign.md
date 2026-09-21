[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).operator=(const Vector4&) / operator=(float) / operator=(const Vector3&)

Copy-assign copies all four components; scalar-assign fills every component with one value; `Vector3`-assign copies X, Y and Z while leaving W untouched. Returns `*this` so assignments chain.

```cpp
Vector4& operator=(const Vector4& rkVector);
Vector4& operator=(const float fScalar);
Vector4& operator=(const Vector3& rhs);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
