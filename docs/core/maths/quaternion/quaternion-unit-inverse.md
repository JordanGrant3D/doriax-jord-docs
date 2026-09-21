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

## [Quaternion](quaternion.md).unitInverse()

Conjugate (`w,-x,-y,-z`): the exact inverse for unit quaternions, with no division. The cheap undo for every normalized facing.

```cpp
Quaternion unitInverse() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-unit-inverse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-unit-inverse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
