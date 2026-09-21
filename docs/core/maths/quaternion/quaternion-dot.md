---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).dot(const Quaternion& rkQ)

Four-component dot product. `1` means identical, `-1` the flipped double-cover twin, `0` unrelated orientations.

```cpp
float dot(const Quaternion& rkQ) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-dot.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-dot.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
