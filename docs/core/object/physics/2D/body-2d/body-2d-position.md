---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body2D](body-2d.md).position()

The body's own position in world space, read from and written straight to the simulation. Drive it from `onFixedUpdate` — never from the Object transform, which is discarded inside the fixed step unless refreshed with `updateTransform`. Setting it also updates the entity transform so rendering follows, and wakes the body. Use for teleports such as respawns and checkpoints; prefer velocity or forces for continuous movement so the solver can resolve collisions.

```cpp
Vector2 getPosition() const;
void setPosition(Vector2 position);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-position.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
