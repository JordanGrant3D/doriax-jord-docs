---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
ScriptBase
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## ScriptBase

The base class for all C++ gameplay scripts attached to entities. Inherit from it and register engine events with `REGISTER_ENGINE_EVENT` (there are no virtual `update` overrides). `CharacterController` inherits `ScriptBase`; `EntityHandle` is for plain handles.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Scene**](../../incomplete-docs.md)* | [**scene**](scriptbase-scene.md) | The scene this script belongs to (protected member set by the constructor). |
| [**Entity**](../ecs/entity.md) | [**entity**](scriptbase-entity.md) | The entity this script is attached to (protected member set by the constructor). |

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../incomplete-docs.md)* [**scene**](../../incomplete-docs.md), [**Entity**](../ecs/entity.md) entity | Constructs a script bound to a scene entity. Register engine events with `REGISTER_ENGINE_EVENT` in the body. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Scene**](../../incomplete-docs.md)* | [**getScene**](scriptbase-get-scene.md) |  | Returns the scene this script belongs to. |
| [**Entity**](../ecs/entity.md) | [**getEntity**](scriptbase-get-entity.md) |  | Returns the entity this script is attached to. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
