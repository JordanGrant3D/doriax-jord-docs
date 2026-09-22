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

## [Body2D](body-2d.md).applyLinearImpulse()

Instantaneous velocity change (Δv = impulse / mass). Prefer impulses over forces for one-shot jumps and hits. The point overload also adds spin; the ToCenter overload changes only linear velocity.

```cpp
void applyLinearImpulse(const Vector2& impulse, const Vector2& point, bool wake);
void applyLinearImpulseToCenter(const Vector2& impulse, bool wake);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-apply-linear-impulse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-apply-linear-impulse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
