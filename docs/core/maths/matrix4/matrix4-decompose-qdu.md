[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).decomposeQDU(position, scale, rotation)

Splits into translation plus QDU rotation/scale via the 3x3 `linear()` block. The leaner path when shear handling of `decomposeStandard` is unneeded.

```cpp
void decomposeQDU(Vector3& position, Vector3& scale, Quaternion& rotation) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-decompose-qdu.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-decompose-qdu.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
