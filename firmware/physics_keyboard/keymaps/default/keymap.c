// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#define LED_PIN GP25
enum custom_keycodes {
    LVEC = SAFE_RANGE,
    LARROW,
    LPERP,
    LPARA,
    LDOINT,
    LDINT,
    LLIM,
    LDOT,
    LTHEREFORE,
    LPROPTO,
    LRADICAL,
    LSUM,
    LPRODUCT,
    LINT,
    LOINT,
    LFRAC,
    LPARTIAL,
    LTIMES,
    LSINCE,
    LALPHA,
    LBETA,
    LOMEGA,
    LEPSILON,
    LENAUGHT,
    LPHI,
    LPHI_L,
    LNABLA,
    LPI,
    LINFTY,
    LOMEGA_L,
    LTHETA,
    LGAMMA,
    LMU,
    LMUNAUGHT,
    LRHO,
    LSIGMA,
    LODOT,
    LOTIMES,
    LLAMBDA,
    LNU,
    LTAU,
    LETA,
    LAPPROX,
    LNEQ,
    LGEQ,
    LLEQ,
    LPM,
    LMP,
    LDELTA,
    LDELTA_L,
    LIM,
    ENAUGHT,
    MUNAUGHT
};

enum layer_names {
    UNI,
    UNI_SHIFT,
    LATEX,
    LATEX_SHIFT
};

void keyboard_post_init_user(void) {
    gpio_set_pin_output(LED_PIN);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case UNI:
    case UNI_SHIFT:
        gpio_write_pin_low(LED_PIN);
        break;
    case LATEX:
    case LATEX_SHIFT:
        gpio_write_pin_high(LED_PIN);
        break;
    }
  return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LVEC:
            if (record->event.pressed) {
                SEND_STRING("\\vec{a}");
            }
            break;
        case LARROW:
            if (record->event.pressed) {
                SEND_STRING("\\rightarrow");
            }
            break;
        case LPERP:
            if (record->event.pressed) {
                SEND_STRING("\\perp");
            }
            break;
        case LPARA:
            if (record->event.pressed) {
                SEND_STRING("\\parallel");
            }
            break;
        case LDINT:
            if (record->event.pressed) {
                SEND_STRING("\\int_{a}^{b}");
            }
            break;
        case LDOINT:
            if (record->event.pressed) {
                SEND_STRING("\\oint_{a}^{b}");
            }
            break;
        case LLIM:
            if (record->event.pressed) {
                SEND_STRING("\\lim_{a \\to b}");
            }
            break;
        case LDOT:
            if (record->event.pressed) {
                SEND_STRING("\\cdot");
            }
            break;
        case LTHEREFORE:
            if (record->event.pressed) {
                SEND_STRING("\\therefore");
            }
            break;
        case LPROPTO:
            if (record->event.pressed) {
                SEND_STRING("\\propto");
            }
            break;
        case LRADICAL:
            if (record->event.pressed) {
                SEND_STRING("\\sqrt{}");
            }
            break;
        case LSUM:
            if (record->event.pressed) {
                SEND_STRING("\\sum_{i=1}^{n}");
            }
            break;
        case LPRODUCT:
            if (record->event.pressed) {
                SEND_STRING("\\prod_{i=1}^{n}");
            }
            break;
        case LINT:
            if (record->event.pressed) {
                SEND_STRING("\\int");
            }
            break;
        case LOINT:
            if (record->event.pressed) {
                SEND_STRING("\\oint");
            }
            break;
        case LFRAC:
            if (record->event.pressed) {
                SEND_STRING("\\frac{a}{b}");
            }
            break;
        case LPARTIAL:
            if (record->event.pressed) {
                SEND_STRING("\\partial");
            }
            break;
        case LTIMES:
            if (record->event.pressed) {
                SEND_STRING("\\times");
            }
            break;
        case LSINCE:
            if (record->event.pressed) {
                SEND_STRING("\\because");
            }
            break;
        case LALPHA:
            if (record->event.pressed) {
                SEND_STRING("\\alpha");
            }
            break;
        case LBETA:
            if (record->event.pressed) {
                SEND_STRING("\\beta");
            }
            break;
        case LOMEGA:
            if (record->event.pressed) {
                SEND_STRING("\\Omega");
            }
            break;
        case LEPSILON:
            if (record->event.pressed) {
                SEND_STRING("\\epsilon");
            }
            break;
        case LENAUGHT:
            if (record->event.pressed) {
                SEND_STRING("\\epsilon_{0}");
            }
            break;
        case LPHI:
            if (record->event.pressed) {
                SEND_STRING("\\phi");
            }
            break;
        case LPHI_L:
            if (record->event.pressed) {
                SEND_STRING("\\Phi");
            }
            break;
        case LNABLA:
            if (record->event.pressed) {
                SEND_STRING("\\nabla");
            }
            break;
        case LPI:
            if (record->event.pressed) {
                SEND_STRING("\\pi");
            }
            break;
        case LINFTY:
            if (record->event.pressed) {
                SEND_STRING("\\infty");
            }
            break;
        case LOMEGA_L:
            if (record->event.pressed) {
                SEND_STRING("\\omega");
            }
            break;
        case LTHETA:
            if (record->event.pressed) {
                SEND_STRING("\\theta");
            }
            break;
        case LGAMMA:
            if (record->event.pressed) {
                SEND_STRING("\\gamma");
            }
            break;
        case LMU:
            if (record->event.pressed) {
                SEND_STRING("\\mu");
            }
            break;
        case LMUNAUGHT:
            if (record->event.pressed) {
                SEND_STRING("\\mu_{0}");
            }
            break;
        case LRHO:
            if (record->event.pressed) {
                SEND_STRING("\\rho");
            }
            break;
        case LSIGMA:
            if (record->event.pressed) {
                SEND_STRING("\\sigma");
            }
            break;
        case LODOT:
            if (record->event.pressed) {
                SEND_STRING("\\odot");
            }
            break;
        case LOTIMES:
            if (record->event.pressed) {
                SEND_STRING("\\otimes");
            }
            break;
        case LLAMBDA:
            if (record->event.pressed) {
                SEND_STRING("\\lambda");
            }
            break;
        case LNU:
            if (record->event.pressed) {
                SEND_STRING("\\nu");
            }
            break;
        case LTAU:
            if (record->event.pressed) {
                SEND_STRING("\\tau");
            }
            break;
        case LETA:
            if (record->event.pressed) {
                SEND_STRING("\\eta");
            }
            break;
        case LAPPROX:
            if (record->event.pressed) {
                SEND_STRING("\\approx");
            }
            break;
        case LNEQ:
            if (record->event.pressed) {
                SEND_STRING("\\neq");
            }
            break;
        case LGEQ:
            if (record->event.pressed) {
                SEND_STRING("\\geq");
            }
            break;
        case LLEQ:
            if (record->event.pressed) {
                SEND_STRING("\\leq");
            }
            break;
        case LPM:
            if (record->event.pressed) {
                SEND_STRING("\\pm");
            }
            break;
        case LMP:
            if (record->event.pressed) {
                SEND_STRING("\\mp");
            }
            break;
        case LDELTA:
            if (record->event.pressed) {
                SEND_STRING("\\Delta");
            }
            break;
        case LDELTA_L:
            if (record->event.pressed) {
                SEND_STRING("\\delta");
            }
            break;
        case LIM:
            if (record->event.pressed) {
                SEND_STRING("lim");
            }
            break;
        case ENAUGHT:
            if (record->event.pressed) {
                send_unicode_string("ε₀");
            }
            break;
        case MUNAUGHT:
            if (record->event.pressed) {
                send_unicode_string("μ₀");
            }
            break;
    }
    return true;
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [UNI] = LAYOUT(
        UC(0x20d7),        UC(0x27c2),   TO(LATEX),        UC(0x2211),   LIM,
        UC(0x22c5),        UC(0x221d),   UC(0x221a),   UC(0x03a3), UC(0x2211),   KC_BSLS,
        UC(0x00d7),        UC(0x03b1),   UC(0x03a9),   UC(0x03b5), UC(0x03d5),   UC(0x2207),
        UC(0x03c0),        UC(0x03c9), UC(0x03b8), UC(0x03bc), UC(0x03c1),   UC(0x2299),
        MO(UNI_SHIFT),   UC(0x03bb),   UC(0x03bc),   UC(0x03c4), UC(0x03b7),MO(UNI_SHIFT),
                      UC(0x2248),   UC(0x2265),   UC(0x00b1), UC(0x0394)
    ),
    [UNI_SHIFT] = LAYOUT(
        UC(0x2192),  UC(0x2225),   _______,            UC(0x220f),   _______,
        UC(0x2234),   _______,   _______,   UC(0x03a0), UC(0x220f),   UC(0x2202),
        UC(0x2235),   UC(0x03b2),   UC(0x03a9),  ENAUGHT, UC(0x03a6),   _______,
        UC(0x221e),   _______, UC(0x03b3), MUNAUGHT, UC(0x03c3),   UC(0x2297),
        _______,   _______,   _______,   _______, _______,   _______,
                 UC(0x2260),   UC(0x2264),   UC(0x2213), UC(0x03b4)
    ),
    [LATEX] = LAYOUT(
        LVEC,   LPERP,   TO(UNI),         LDINT,   LLIM,
        LDOT,   LPROPTO,   LRADICAL,   LSUM, LINT,   LFRAC,
        LTIMES,   LALPHA,   LOMEGA,   LEPSILON, LPHI,   LNABLA,
        LPI,   LOMEGA_L, LTHETA, LMU, LRHO,   LODOT,
        MO(LATEX_SHIFT),   LLAMBDA,   LNU,   LTAU, LETA,MO(LATEX_SHIFT),
                 LAPPROX,   LGEQ,   LPM, LDELTA
    ),
    [LATEX_SHIFT] = LAYOUT(
        LARROW,  LPARA,   _______,            LDOINT,   _______,
        LTHEREFORE,   _______,   _______,   LPRODUCT, LOINT,   LPARTIAL,
        LSINCE,   LBETA,   LOMEGA,   LENAUGHT, LPHI_L,   _______,
        LINFTY,   _______, LGAMMA, LMUNAUGHT, LSIGMA,   LOTIMES,
        _______,   _______,   _______,   _______, _______,   _______,
                 LNEQ,   LLEQ,   LMP, LDELTA_L
    )
};
