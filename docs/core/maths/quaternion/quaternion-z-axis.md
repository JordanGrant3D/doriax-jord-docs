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

## [Quaternion](quaternion.md).zAxis()

Returns the rotated local Z axis. Negate it for the forward vector CharacterController drives along (`camForward`).

```cpp
Vector3 zAxis() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-z-axis.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-z-axis.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
