---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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
