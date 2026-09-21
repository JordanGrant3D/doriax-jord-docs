---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).y

Y component of the vector. CharacterController reads `mousePos.y` and gamepad `gamepadY` to drive `camPitch`.

```cpp
float y;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
