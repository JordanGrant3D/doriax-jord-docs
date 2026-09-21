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

## [Quaternion](quaternion.md).norm()

Squared length (`w²+x²+y²+z²`); exactly `1` for valid unit rotations. Sanity-checks hand-built quaternions before use.

```cpp
float norm() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-norm.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-norm.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
