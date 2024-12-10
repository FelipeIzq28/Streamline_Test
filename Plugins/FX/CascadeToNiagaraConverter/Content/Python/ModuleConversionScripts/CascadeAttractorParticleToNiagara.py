from ModuleConverterInterface import ModuleConverterInterface
import unreal as ue
from unreal import FXConverterUtilitiesLibrary as ueFxUtils


class CascadeParticleAttractorConverter(ModuleConverterInterface):

    @classmethod
    def get_input_cascade_module(cls):
        return ue.ParticleModuleAttractorParticle

    @classmethod
    def convert(cls, args):
        cascade_module = args.get_cascade_module()
        emitter = args.get_niagara_emitter_context()

        # get all properties from the cascade point attractor module
        # noinspection PyTypeChecker
        (emitter_name,
         range_distribution,
         b_strength_by_distance,
         strength_distribution,
         b_affect_base_velocity,
         selection_method,
         b_renew_source,
         b_inherit_source_velocity
         ) = ueFxUtils.get_particle_module_attractor_particle_props(cascade_module)

        emitter.log(
            "Failed to convert module particle attractor force: Niagara does not provide an equivalent module.",
            ue.NiagaraMessageSeverity.WARNING,
            False)

        # todo add module support for cascade parity
