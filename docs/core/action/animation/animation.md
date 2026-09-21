---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Animation
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Animation

`Animation` is a timeline-based action composed of `ActionFrame` entries. Each frame schedules an action to run against a target entity at a specific time offset, for a specific duration. Frames can overlap to create parallel tweens, producing complex multi-property animations. Inherits `Action` (`start`, `pause`, `stop`, target, speed, weight).

[**Model**](../../object/model/model.md) objects create `Animation` clips automatically when loading a GLTF file. You can also build animations entirely in code for procedural sequences, and crossfade between clips with `Model::playAnimation` or the `fadeIn` / `fadeOut` primitives.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loop**](animation-loop.md) | When `true`, the animation restarts from the beginning after playing to completion. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**ownedActions**](animation-owned-actions.md) | When `true`, all child action entities referenced by the animation's frames are destroyed when the animation is destroyed. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**duration**](animation-duration.md) | Total length of the animation in seconds. Set automatically from GLTF data when a model loads. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**blendWeight**](animation-blend-weight.md) | The clip's current blend weight (`0.0`–`1.0`), used to layer or crossfade clips. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**defaultFadeTime**](animation-default-fade-time.md) | Crossfade duration in seconds used by `Model::playAnimation` when called without an explicit fade time. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../../incomplete-docs.md)* scene | Creates an animation on a new entity with an empty timeline. |
| [**Scene**](../../../incomplete-docs.md)* scene, [**Entity**](../../ecs/entity.md) entity | Wraps an existing scene entity as an animation without adding components. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fadeIn**](animation-fade-in-fade-out.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) duration | Starts the clip (if stopped) and ramps its blend weight from `0` up to `1` over `duration` seconds. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fadeOut**](animation-fade-in-fade-out.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) duration | Ramps a running clip's blend weight down to `0` and stops it when it reaches zero. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**start**](animation-start.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) fadeInDuration | Starts the clip with a fade-in ramp of `fadeInDuration` seconds. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getBlendWeight**](animation-blend-weight.md) |  | Returns the clip's current blend weight (`0.0`–`1.0`). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBlendWeight**](animation-blend-weight.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) weight | Sets the blend weight directly, cancelling any in-progress fade. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getDefaultFadeTime**](animation-default-fade-time.md) |  | Returns the crossfade duration used by `Model::playAnimation` without an explicit fade time. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDefaultFadeTime**](animation-default-fade-time.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) time | Sets the crossfade duration used by `Model::playAnimation` without an explicit fade time. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isLoop**](animation-loop.md) |  | Returns `true` while the animation restarts after playing to completion. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLoop**](animation-loop.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) loop | Enables or disables restarting the animation after it plays to completion. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isOwnedActions**](animation-owned-actions.md) |  | Returns `true` while child action entities are destroyed with the animation. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setOwnedActions**](animation-owned-actions.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) ownedActions | Enables or disables destroying child action entities with the animation. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float)& | [**getDuration**](animation-duration.md) |  | Returns the total length of the animation in seconds. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDuration**](animation-duration.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float)& duration | Sets the total length of the animation in seconds. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addActionFrame**](animation-add-action-frame.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) startTime, [**float**](https://en.cppreference.com/cpp/keyword/float) duration, [**Entity**](../../ecs/entity.md) action, [**Entity**](../../ecs/entity.md) target | Adds a frame with an explicit duration override and target. A `duration` of `0` (or lower) means auto. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addActionFrame**](animation-add-action-frame.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) startTime, [**Entity**](../../ecs/entity.md) [**timedAction**](../../../incomplete-docs.md), [**Entity**](../../ecs/entity.md) target | Adds a frame that follows the action's own duration, with an explicit target. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addActionFrame**](animation-add-action-frame.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) startTime, [**float**](https://en.cppreference.com/cpp/keyword/float) duration, [**Entity**](../../ecs/entity.md) action | Adds a frame with an explicit duration override, targeting the animation's own target. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addActionFrame**](animation-add-action-frame.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) startTime, [**Entity**](../../ecs/entity.md) [**timedAction**](../../../incomplete-docs.md) | Adds a frame that follows the action's own duration, targeting the animation's own target. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getActionFrameSize**](animation-get-action-frame-size.md) |  | Returns the number of frames currently in the timeline. |
| [**ActionFrame**](../../../incomplete-docs.md)& | [**getActionFrame**](animation-get-action-frame.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) index | Returns a reference to the frame at the given zero-based index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setActionFrameStartTime**](animation-set-action-frame-start-time.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) index, [**float**](https://en.cppreference.com/cpp/keyword/float) startTime | Modifies the start time of an existing frame by index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setActionFrameDuration**](animation-set-action-frame-duration.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) index, [**float**](https://en.cppreference.com/cpp/keyword/float) duration | Modifies the duration of an existing frame by index. A `duration` of `0` (or lower) switches the frame to auto. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setActionFrameEntity**](animation-set-action-frame-entity.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) index, [**Entity**](../../ecs/entity.md) action | Replaces the action entity for a given frame. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**clearActionFrames**](animation-clear-action-frames.md) |  | Removes all frames from the timeline. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
