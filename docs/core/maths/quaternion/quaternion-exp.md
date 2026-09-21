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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
