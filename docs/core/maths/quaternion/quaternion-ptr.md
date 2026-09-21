[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).ptr()

Returns a pointer to `w` (four contiguous floats) for raw uploads. The non-`const` overload is writable, the `const` one read-only.

```cpp
float* ptr();
const float* ptr() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-ptr.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-ptr.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
